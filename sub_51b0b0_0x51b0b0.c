// 函数名称: sub_51b0b0
// 虚拟地址: 0x51b0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_51b0b0(char arg1)
{
    // 第一条实际指令: uint32_t eax_16 = zx.d(arg1)
    uint32_t eax_16 = zx.d(arg1)
    
    if (eax_16 u> 0xe)
        uint32_t var_4 = eax_16
        sub_4c5680("unknown controller button %d")
        return 0
    
    switch (eax_16)
        case 0
            return 1
        case 1
            return 2
        case 2
            return 4
        case 3
            return 8
        case 4
            return 0x10
        case 5
            return 0x20
        case 6
            return 0x40
        case 7
            return 0x80
        case 8
            return 0x100
        case 9
            return 0x200
        case 0xa
            return 0x1000
        case 0xb
            return 0x2000
        case 0xc
            return 0x4000
        case 0xd
            return 0x8000
        case 0xe
            return 0x400
}
