// 函数名称: sub_413040
// 虚拟地址: 0x413040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_413040()
{
    // 第一条实际指令: data_27e8020 = 0xff000000
    data_27e8020 = 0xff000000
    void* eax = data_27e7a70
    int32_t ecx = *(eax + 0x64)
    *(eax + 0x68) += 1
    
    if (ecx == 5)
        *(eax + 0x64) = 7
        
        if (data_27c05e8 != 3)
            data_27c05f4 = ecx
    else if (ecx == 0)
        *(eax + 0x64) = 1
    else if (ecx == 3)
        *(eax + 0x64) = 2
    
    if (*(data_27e7fd0 + 0x27) != 0)
        return sub_412da0()
    
    int32_t result
    int80_t st0
    st0, result = sub_412ee0()
    return result
}
