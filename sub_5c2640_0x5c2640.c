// 函数名称: sub_5c2640
// 虚拟地址: 0x5c2640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c2640(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        zip_error_set(arg1 + 8, 0x12, arg2)
        return 0
    
    int32_t* eax_3 = sub_5a881a(0x28)
    
    if (eax_3 == 0)
        zip_error_set(arg1 + 8, 0xe, eax_3)
        return 0
    
    *eax_3 = 0
    eax_3[1] = arg3
    zip_error_init(&eax_3[2])
    eax_3[6] = 0
    eax_3[7] = 0
    eax_3[8] = 0
    return sub_5c3a00(arg1, arg2, sub_5c2390, eax_3)
}
