// 函数名称: sub_4cd480
// 虚拟地址: 0x4cd480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4cd480(void* arg1, int32_t arg2, int32_t* arg3, int128_t* arg4 @ edi)
{
    // 第一条实际指令: int32_t* var_c = arg3
    int32_t* var_c = arg3
    int32_t entry_ebx
    
    if (*arg3 == 0)
        if (sub_5a9831(arg3[5], arg1, FILE_BEGIN) == 0)
            uint32_t eax_3
            eax_3.b = sub_5a9cf0(arg4, entry_ebx, 1, arg3[5]) == 1
            return eax_3
    else if (sub_4cd390(arg1, arg2, arg3, arg1).b != 0)
        return sub_4cd310(arg3, entry_ebx, arg4)
    void* eax
    eax.b = 0
    return eax
}
