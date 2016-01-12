#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

/*
 * Welcome to Day 8! Check out a video review of dictionaries
 * and hashmaps here, or just jump right into the problem.
 * 
 * You are given a phone book that consists of your friend's
 *  names and their phone number. After that you will be given
 *  your friend's name as query. For each query, print the
 *  phone number of your friend.
 * 
 * Input Format:
 *   The first line will have an integer N denoting the number
 *   of entries in the phone book. Each entry consists of two
 *   lines: a name and the corresponding phone number. 
 * 
 *   After these, there will be some queries. Each query will
 *   contain name of a friend. Read the queries until end-of-file.
 * 
 * Constraints:
 *   A name consists of only lower-case English letters and it
 *   may be in the format 'first-name last-name' or in the format
 *  'first-name'. Each phone number has exactly 8 digits without
 *   any leading zeros.
 * 
 * 1≤N≤104
 * 1≤queries≤104
 * 
 * Output Format:
 *   For each case, print "Not found" without quotes, if the friend
 *   has no entry in the phone book. Otherwise, print the friend's
 *   name and phone number. See sample output for the exact format.
 * 
 * Sample Input:
 *   3
 *   sam
 *   99912222
 *   tom
 *   11122222
 *   harry
 *   12299933
 *   sam
 *   edward
 *   harry
 *
 * Sample Output:
 *   sam=99912222
 *   Not found
 *   harry=12299933
 */

namespace {
    bool is_phone_number(const std::string& s)
    {
	return s.size() == 8 &&
	       std::find_if(s.begin(), s.end(), [](char c) { 
		       return !std::isdigit(c); }) == s.end();
    }
}

struct PhoneBook {
    PhoneBook()
    {
    }

    void
    process_queries()
    {
        std::string query;

        while (std::getline(std::cin, query)) {
            if (query.size() == 0)
                continue;

            std::string phone_number;

            if (lookup_name(query, phone_number)) {
                std::cout << query << "=" << phone_number << std::endl;
            } else {
                std::cout << "Not found" << std::endl;
            }
        }
    }

    void
    read_records()
    {
        ssize_t num_records = 0;
        std::cin >> num_records;
        while (num_records > 0) {
            num_records--;

            std::string first_name, last_name, phone_number;
            std::string tmp_record;

            std::cin >> first_name;
            std::cin >> tmp_record;

            if (::is_phone_number(tmp_record)) {
                phone_number = tmp_record;
            } else {
                last_name = tmp_record;
                std::cin >> phone_number;
            }

            std::string name(first_name);
            if (last_name.size() > 0)
                name += " " + last_name;

            phone_book_[name] = phone_number;
        }
    }

private:
    std::unordered_map<std::string, std::string> phone_book_;

    bool
    lookup_name(const std::string& name, std::string& phone_number)
    {
        std::unordered_map<std::string,std::string>::const_iterator rec = phone_book_.find(name);
        if (rec == phone_book_.end()) {
            return false;
        } else {
            phone_number = rec->second;
            return true;
        }
    }

};

int
main()
{
    PhoneBook pb;
    pb.read_records();
    pb.process_queries();

    return 0;
}

