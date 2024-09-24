function upperCaseDomain(email){
    // 関数を完成させてください
    return email
            .split('@')[1] // @の次の部分を切り出す（splitで分割）
            .toUpperCase(); //ドメイン部分を大文字に変換
}
