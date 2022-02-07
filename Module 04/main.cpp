#include <iostream>
#include "mylist.h"

using namespace std;

int main() {

    /*
     * Init the variables
     */
    list l;
    address p;
    infotype mhs;

    /*
     * Because you cannot directly modify the mhs instance,
     * you need to create the atribute, then allocate that to the mhs instance!
     */
    string nama, nim;
    float ipk;

    // START OF SOAL TERBIMBING
    /*
     * Allocating and printing the list
     * This would return 0x0 and empty list.
     */
    createList(l);
    printList(l);

    /*
     * Creating mahasiswa instace
     * After created, we init the element
     * We push the element to the first list
     */
    mhs = newMahasiswa("Alice", "1301190202", 3.5);
    p = newElement(mhs);
    insertFirst(l, p);

    mhs = newMahasiswa("Bob", "1301190203", 4);
    p = newElement(mhs);
    insertFirst(l, p);

    printList(l);
    cout << endl;

    /*
     * Creating mahasiswa instace
     * After created, we init the element
     * We push the element to the last list
     */
    mhs = newMahasiswa("Chihaya", "1301190204", 3.6);
    p = newElement(mhs);
    insertLast(l, p);

    mhs = newMahasiswa("Delta", "1301190205", 2.7);
    p = newElement(mhs);
    insertLast(l, p);

    mhs = newMahasiswa("Euniche", "1301190201", 3.9);
    p = newElement(mhs);
    insertFirst(l, p);

    printList(l);
    cout << endl;

    /*
     * Deleting first and last element in the list
     */
    deleteFirst(l, p);
    deleteLast(l, p);

    printList(l);
    cout << endl;
    // END OF SOAL TERBIMBING

    // START OF SOAL MANDIRI
    /*
     * Reset the list to empty state
     */
    createList(l);
    printList(l);

    int i;

    i = 1;
    cout << "Input data ke-" << i << endl;
    cout << "Nama: "; cin >> nama;
    cout << "NIM: "; cin >> nim;
    cout << "IPK: "; cin >> ipk;
    cout << endl;

    /*
     * The input would go on if the name is not (-)
     */
    while (nama != "-") {
        mhs = newMahasiswa(nama, nim, ipk);
        p = newElement(mhs);
        insertFirst(l, p);

        i++;

        cout << "Input data ke-" << i << endl;
        cout << "Nama: "; cin >> nama;
        cout << "NIM: "; cin >> nim;
        cout << "IPK: "; cin >> ipk;
        cout << endl;
    }

    printList(l);
    cout << endl;

    cout << "Starting to delete the list..." << endl;

    p = first(l);
    i = 1;

    /*
     * Handle if the list is null
     * Or if the list only have 1 element
     * Or if the list contain are many element
     */
    if (p == null) {
        cout << "List Kosong!" << endl;
    } else if (next(p) == null) {
        /*
         * Delete the last element
         * Since the next() keyword would return null for the last value, we need to delete that manually!
         */
        cout << "[" << i << "]" << endl;
        cout << "Nama: " << info(p).nama << endl;
        cout << "NIM: " << info(p).nim << endl;
        cout << "IPK: " << info(p).ipk << endl;

        cout << "Deleting the last mhs element with name " << info(p).nama << "..." << endl;

        deleteFirst(l, p);
        cout << "Last element deleted!" << endl << endl;
    } else {
        /*
         * Deleting the rest of the element
         */
        while (next(p) != null ) {
            cout << "[" << i << "]" << endl;
            cout << "Nama: " << info(p).nama << endl;
            cout << "NIM: " << info(p).nim << endl;
            cout << "IPK: " << info(p).ipk << endl;

            cout << "Deleting the mhs element with name " << info(p).nama << "..." << endl;

            deleteFirst(l, p);
            cout << "Element deleted!" << endl << endl;

            i++;
            p = next(p);
        }

        /*
         * Delete the last element
         * Since the next() keyword would return null for the last value, we need to delete that manually!
         */
        cout << "[" << i << "]" << endl;
        cout << "Nama: " << info(p).nama << endl;
        cout << "NIM: " << info(p).nim << endl;
        cout << "IPK: " << info(p).ipk << endl;

        cout << "Deleting the last mhs element with name " << info(p).nama << "..." << endl;

        deleteFirst(l, p);
        cout << "Last element deleted!" << endl << endl;

    }

    /*
     * Reset the list to empty state
     */
    createList(l);
    printList(l);

    // END OF SOAL MANDIRI
    return 0;
}
