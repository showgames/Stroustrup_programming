int
main()
{
    vector<int> answer {1,2,3,4};  // 解答: ただしここにハードコーディングされているのは良くない
    vector<int> inputs;
    int bull = 0, cow = 0;



    // ユーザーが解答
    for(int i = 0, input = 0; i < answer.size(); ++i) {
        cin >> input;
        if(input < 0 || input > 9) error("bad_answer");
        else inputs.push_back(input);
    }


    // 答え合わせ
    for(int i = 0; i < answer.size(); ++i) {
        if(inputs[i] == answer[i]) ++bull;              // 位置と答えが一致していればbullを1増やす
        else {
            for(int j = 0; j < answer.size(); ++j) {
                if(inputs[i] == answer[j]) ++cow;       // 答えの中に存在すればcowを1増やす
            }
        }
    }


    // 結果出力
    cout << bull << " bull" << " and " << cow << " cow\n";
}
