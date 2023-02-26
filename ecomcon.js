
// ecomcon.js
// Douglas Crockford
// 2018-08-08

const rx_crlf = /\n|\r\n?/;

const rx_ecomcon = /^\/\/([a-zA-Z0-9_]+)\u0020?(.*)$/;

//. Capturing groups:
//.  [1] The enabled comment tag
//.  [2] The rest of the line

const rx_tag = /^[a-zA-Z0-9_]+$/;

export default Object.freeze(function ecomcon(source_string, tag_array) {
    const tag = Object.create(null);
    tag_array.forEach(
        function (string) {
            if (!rx_tag.test(string)) {
                throw new Error("ecomcon: " + string);
            }
            tag[string] = true;
        }