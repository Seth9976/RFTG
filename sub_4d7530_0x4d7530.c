// 函数名称: sub_4d7530
// 虚拟地址: 0x4d7530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4d7530(int32_t arg1)
{
    // 第一条实际指令: uint32_t result = arg1 - 0xc
    uint32_t result = arg1 - 0xc
    
    if (result u<= 0xb)
        result = zx.d(lookup_table_4d75ac[result])
        
        switch (result)
            case 0
                *(data_27e7fdc + 0x10) = 2
                return 2
            case 1
                *(data_27e7fdc + 0x10) = 3
                return 3
            case 2
                *(data_27e7fdc + 0x10) = 4
                return 4
            case 3
                *(data_27e7fdc + 0x10) = 6
                return 6
            case 4
                result = 7
                *(data_27e7fdc + 0x10) = 7
    
    return result
}
