/**
 * @param {string} s
 * @param {string[]} words
 * @return {boolean}
 */
var isPrefixString = function(s, words) {
    var str = "";
    var count = 0;
    for(let i=0;i<words.length;i++){
    str = str + words[i];
    if(str == s){
    count++;
    break;
    }
    }
    if(count > 0){
    return true;
    }
    else{
    return false;
}
};
