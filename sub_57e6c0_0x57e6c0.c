// 函数名称: sub_57e6c0
// 虚拟地址: 0x57e6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_57e6c0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: sub_5abfc0(&data_31601c8, 0, 0x104)
    sub_5abfc0(&data_31601c8, 0, 0x104)
    int32_t var_10 = arg1[0xf]
    void* var_14 = &arg1[7]
    uint32_t var_18 = zx.d(*(arg1 + 0x1b))
    uint32_t var_1c = zx.d(*(arg1 + 0x1a))
    uint32_t var_20 = zx.d(*(arg1 + 0x19))
    uint32_t var_24 = zx.d(arg1[6].b)
    uint32_t var_28 = zx.d(*(arg1 + 0x17))
    uint32_t var_2c = zx.d(*(arg1 + 0x16))
    uint32_t var_30 = zx.d(*(arg1 + 0x15))
    uint32_t var_34 = zx.d(arg1[5].b)
    int32_t var_38 = arg1[4]
    int32_t var_3c = arg1[3]
    int32_t var_40 = arg1[2]
    int32_t var_44 = arg1[1]
    int32_t var_48 = *arg1
    _swprintf(&data_31601c8, 0x104, 
        "Height: %d\r\nWidth: %d\r\nEscapement: %d\r\nOrientation:  %d\r\nWeight: %d\r\nItalic: %d\r\n"
    "Underline: %d\r\nStrikeOut: %d\r\nCharSet: %d\r\nOutPrecision: %d\r\nClipPrecision: %d\r\nQuality: "
    "\r\nPitchAndFamily: %d\r\nFaceName: %s\r\nColor: %d")
    return &data_31601c8
}
