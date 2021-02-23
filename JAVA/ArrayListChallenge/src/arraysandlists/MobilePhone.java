package arraysandlists;

import java.util.ArrayList;

public class MobilePhone {

    private ArrayList<Contact> contacts;

    public MobilePhone() {
        this.contacts = new ArrayList<Contact>();
    }

    public void printContacts() {
        System.out.println("The contacts are as under :\n");
        for(int i = 0; i < this.contacts.size(); i++) {
            System.out.print("\nName : " + this.contacts.get(i).getContactName() +
                    "\nNumber : " + this.contacts.get(i).getPhoneNumber() + "\n");
        }
    }

    public void addContact(String name, String phoneNumber) {
        this.contacts.add(new Contact(name, phoneNumber));
        System.out.println(name + " : " + phoneNumber + " added to the contacts" +
                " successfully");
    }

    public void updateContact(int positionOfTheContact, String name, String phoneNumber) {
        positionOfTheContact--;

        this.contacts.set(positionOfTheContact, new Contact(name, phoneNumber));
        System.out.println("Contact number " + positionOfTheContact + " updated successfully.");
    }

    public void removeContact(int position) {
        position--;
        this.contacts.remove(position);
        System.out.println("Contact number " + position + " removed successfully.");
    }

    public void find(String searchItem) {
        boolean found = false;
        for(int i = 0; i < contacts.size(); i++)
            if(contacts.get(i).getPhoneNumber() == searchItem || contacts.get(i).getContactName() == searchItem)
                found = true;

        if(found)
            System.out.println(searchItem + " found in the contacts list.");
        else
            System.out.println(searchItem + " not found in the contact list.");
    }
}
