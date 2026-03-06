// 函数名称: sub_547c60
// 虚拟地址: 0x547c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_547c60(int32_t* arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: if (arg1 s<= 0)
    if (arg1 s<= 0)
        return 
    
    void* esi_1 = arg3 + 8
    int32_t* i_1 = arg1
    int32_t* i
    
    do
        int32_t* eax = *(esi_1 - 8)
        
        if (sub_546be0(eax, arg4, *(esi_1 + 8), *(esi_1 - 4), *esi_1, eax).b == 0)
            sub_547b50(esi_1 - 8, arg4)
        
        esi_1 += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)
}
