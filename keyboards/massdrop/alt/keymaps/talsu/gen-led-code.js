(datas => {
    // let prevKeyLayout = null
    datas.forEach(data => {
        // if (prevKeyLayout) {
        //     for (let i = 0; i < prevKeyLayout.length; ++i) {
        //         if (data.keyLayout[i] === null || data.keyLayout[i] === ________) {
        //             data.keyLayout[i] = prevKeyLayout[i];
        //         }
        //     }
        // }

        // prevKeyLayout = data.keyLayout

        createConfig(data)
    })
})([
    // {
    //     flags: 'LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB',
    //     layer: 0,
    //     keyLayout: [
    //         'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF',
    //         'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000', 'FF0000',
    //         '00FF00', '00FF00', '00FF00', '00FF00', '00FF00', '00FF00', '00FF00', '00FF00', '00FF00', '00FF00', '00FF00', '00FF00',           '00FF00', '00FF00',
    //         '0000FF', '0000FF', '0000FF', '0000FF', '0000FF', '0000FF', '0000FF', '0000FF', '0000FF', '0000FF', '0000FF', '0000FF',           '0000FF', '0000FF',
    //         '000000', ________, '000000',                               ________,                               '000000', ________, '000000', ________, '000000'
    //     ],
    //     edgeLayout: [
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100', 'FF0100',
    //         'FF0100', 'FF0100', 'FF0100'
    //     ]
    // },

    {
        title: 'dev/tty',
        flags: 'LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB',
        layer: 0,
        keyLayout: [
            'FF0000', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF',
            'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF',
            'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF',           'FF0000', 'FFFFFF',
            'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF',           'FFFFFF', 'FFFFFF',
            'FFFFFF', 'FFFFFF', 'FFFFFF',                               'FFFFFF',                               'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF', 'FFFFFF'
    ],
        edgeLayout: [
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000'
        ]
    },
    {
        title: 'Mito Laser',
        flags: 'LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB',
        layer: 0,
        keyLayout: [
            'ff00a5', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff',
            '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff',
            '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff',           'ff00a5', '4200ff',
            '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff', '4200ff',           'ff00a5', '4200ff',
            '4200ff', '4200ff', '4200ff',                               '4200ff',                               '4200ff', '4200ff', 'ff00a5', 'ff00a5', 'ff00a5'
    ],
        edgeLayout: [
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000', '000000',
            '000000', '000000', '000000'
        ]
    },
    {
        title: 'Layer 2',
        flags: 'LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB',
        layer: 2,
        keyLayout: [
            'FF00FF', ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
            '00FFFF', ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________, ________,
            ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________, ________,
            ________, ________, ________,                               ________,                               ________, ________, ________, ________, ________
    ],
        edgeLayout: [
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF', 'FF00FF',
            'FF00FF', 'FF00FF', 'FF00FF'
        ]
    },
    {
        title: 'Layer 3',
        flags: 'LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB',
        layer: 3,
        keyLayout: [
            '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000',
            '000000', 'FF0000', 'ffb500', 'FF0000', '000000', '000000', '000000', '000000', '000000', 'FF00FF', 'FF00FF', '000000', '000000', '000000', '000000',
            '000000', 'fff200', 'ffb500', 'fff200', '000000', '000000', '000000', '000000', '000000', 'FF00FF', '000000', '000000',           '000000', '000000',
            '000000', '00FF00', 'ffffff', '0000FF', '000000', 'FF0000', '000000', '000000', '000000', '00FFFF', '00FFFF', '000000',           '000000', '000000',
            '000000', '000000', '000000',                               '000000',                               '000000', '000000', '000000', '000000', '000000'
        ],
        edgeLayout: [
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00', '00FF00',
            '00FF00', '00FF00', '00FF00'
        ]
    },
    {
        title: 'Layer 4',
        flags: 'LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB',
        layer: 4,
        keyLayout: [
            '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000', '000000',
            '000000', 'FF0000', 'ffb500', 'FF0000', '000000', '000000', '000000', '000000', '000000', 'FF00FF', 'FF00FF', '000000', '000000', '000000', '000000',
            '000000', 'fff200', 'ffb500', 'fff200', '000000', '000000', '000000', '000000', '000000', 'FF00FF', '000000', '000000',           '000000', '000000',
            '000000', '00FF00', 'ffffff', '0000FF', '000000', 'FF0000', '000000', '000000', '000000', '00FFFF', '00FFFF', '000000',           '000000', '000000',
            '000000', '000000', '000000',                               '000000',                               '000000', '000000', '000000', '000000', '000000'
        ],
        edgeLayout: [
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000', 'FF0000',
            'FF0000', 'FF0000', 'FF0000'
        ]
    }
])

function createConfig(data) {

    const layout = [...data.keyLayout, ...data.edgeLayout]

    const colorMap = new Map()
    layout.forEach((item, index) => {
        if (item === null || item === ________) return;
        const color = item.toUpperCase()
        if (!colorMap.has(color)) colorMap.set(color, new Set())
        colorMap.get(color).add(index)
    })

    console.log(`    // ----${data.title}----`);
    colorMap.forEach((positions, color) => {
        let all = ''
        for (let i = 0;i < 128; ++i) {
            all += positions.has(i) ? '1' : '0'
        }
        const rgb = hexToRgb(color)
        const id0Bin = all.substr(0, 32).split("").reverse().join("");
        const id1Bin = all.substr(32, 32).split("").reverse().join("");
        const id2Bin = all.substr(64, 32).split("").reverse().join("");
        const id3Bin = all.substr(96, 32).split("").reverse().join("");

        console.log(`    { \
.flags = ${data.flags}, \
.id0 = 0x${bin2hex(id0Bin)}, \
.id1 = 0x${bin2hex(id1Bin)}, \
.id2 = 0x${bin2hex(id2Bin)}, \
.id3 = 0x${bin2hex(id3Bin)}, \
.r = ${rgb.r}, .g = ${rgb.g}, .b = ${rgb.b}, \
.layer = ${data.layer} },`)

    })

    console.log('')

}

function hexToRgb(hex) {
    var result = /^#?([a-f\d]{2})([a-f\d]{2})([a-f\d]{2})$/i.exec(hex);
    return result ? {
        r: parseInt(result[1], 16),
        g: parseInt(result[2], 16),
        b: parseInt(result[3], 16)
    } : null;
}

function bin2hex(b) {
  b = b.split(" ").join("")
    return b.match(/.{4}/g).reduce(function(acc, i) {
        return acc + parseInt(i, 2).toString(16);
    }, '').toUpperCase()
}

var ________ = null;
