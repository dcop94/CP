#include <iostream>
#include <string>

u
using namespace std;

int main() {
    string city[] = {
    string city[]


"Korea", "Japan", "China", "USA", "Canada" };


    int citySize = sizeof(city) / sizeof(city[0]);



    whil



        while (true) {
            cout <<
                cout <<

                cou




                "나라이름을 입력하세요 (list를 입력하면 나라목록이 나옵니다): ";
            string nation;

            string nation;
            getline

                string nation;

            string nation

                string
                getline(cin, nation);



            if (nation == "list") {
                cout <<
                    cout <<

                    cout
                    "나라 목록:" << endl;
                for (string nation : city) {
                    cout << nation << endl;
                }
            }
            cout << nation << endl;
        }
}

cout << nation << endl;


cout << nation <<

cout << nation


else {








    bool found = false;

    f






        for (int i = 0; i < citySize; i++) {






            if (nation == city[i]) {
                cout <<
                    cout <<

                    cou










                    "인덱스: " << i << ", 나라이름: " << city[i] << endl;
                found =
                    found






                    true;






                break;
            }
        }

        }
            }


                }
            }


                }


                }





                if (!found) {
                    cout <<
                        cout <<

                        cout








                        "입력한 나라는 리스트에 없습니다. 다시 입력하세요." << endl;
                }
            }




else {

    br










        break; // 나라를 찾았으므로 루프 종료
            }
        }
    }


            }
        }
    }

    retu

            }
        }
    }

    r

            }
        }
    }



            }
        }


            }
        }

            }


            }







            return 0;
}

}