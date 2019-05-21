#include<iostream>
#include"DoubleLinkList.h"

int main() {

	DuLinkList dlink = CreateDuLink();
	DisplayDuLink(dlink);
	InsertDuLink(dlink, 5, 55);
	DisplayDuLink(dlink);
	DeleteDuLink(dlink, 8);
	DisplayDuLink(dlink);
	return 0;
}