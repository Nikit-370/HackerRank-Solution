#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/* Messages Order in C++ - Hacker Rank Solution START */

class Message 
{
    public: 
        Message() {}
        Message(const int& p_iID, const string& p_sText) : m_sText(p_sText), m_iID(p_iID) {}

        const string& get_text() 
        {
             return m_sText;   
        }
        const int& get_id() const {
            return m_iID;
        }
    private:
        string m_sText;
        int m_iID;

};

bool operator<(const Message& lhs, const Message& rhs) 
{
    return lhs.get_id() < rhs.get_id();
}

class MessageFactory 
{
    public:
        MessageFactory() {}
        Message create_message(const string& p_sText) 
        {
        return {m_iID++, p_sText};
        }
    private :
        int m_iID = 0;
};

/* Messages Order in C++ - Hacker Rank Solution END */

class Recipient 
{
    public:
        Recipient() {}
        void receive(const Message& msg) 
        {
            messages_.push_back(msg);
        }
        void print_messages() 
        {
            fix_order();
            for (auto& msg : messages_) 
            {
                cout << msg.get_text() << endl;
            }
            messages_.clear();
        }
    private:
        void fix_order() 
        {
            sort(messages_.begin(), messages_.end());
        }
        vector<Message> messages_;
};

class Network 
{
    public:
        static void send_messages(vector<Message> messages, Recipient& recipient) 
        {
        // simulates the unpredictable network, where sent messages might arrive in unspecified order
            random_shuffle(messages.begin(), messages.end());         
            for (auto msg : messages) 
            {
                recipient.receive(msg);
            }
        }
};

int main() 
{
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) 
    {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}