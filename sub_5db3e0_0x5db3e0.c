// 函数名称: sub_5db3e0
// 虚拟地址: 0x5db3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5db3e0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == arg2[7])
    if (arg1 == arg2[7])
        return 
    
    int32_t eax_1 = sub_5d5680(nullptr, nullptr)
    int32_t eax_3 = arg1 & 1
    
    if (eax_3 != 0)
        sub_5db300(eax_3, eax_1 & 1, arg2, 1)
    
    if ((arg1.b & 2) != 0)
        sub_5db300(not.d(arg1 u>> 1) & 1, eax_1 & 1, arg2, 1)
    
    int32_t eax_9 = arg1 & 4
    
    if (eax_9 != 0)
        sub_5db300(eax_9, eax_1 & 4, arg2, 3)
    
    if ((arg1.b & 8) != 0)
        sub_5db300(not.d(arg1 u>> 3) & 1, eax_1 & 4, arg2, 3)
    
    int32_t eax_15 = arg1 & 0x10
    
    if (eax_15 != 0)
        sub_5db300(eax_15, eax_1 & 2, arg2, 2)
    
    if ((arg1.b & 0x20) != 0)
        sub_5db300(not.d(arg1 u>> 5) & 1, eax_1 & 2, arg2, 2)
    
    int32_t eax_21 = arg1 & 0x40
    
    if (eax_21 != 0)
        sub_5db300(eax_21, eax_1 & 8, arg2, 4)
    
    if (arg1.b s< 0)
        sub_5db300(not.d(arg1 u>> 7) & 1, eax_1 & 8, arg2, 4)
    
    int32_t eax = arg1 & 0x100
    
    if (eax != 0)
        sub_5db300(eax, eax_1 & 0x10, arg2, 5)
    
    if ((arg1 & 0x200) != 0)
        sub_5db300(not.d(arg1 u>> 9) & 1, eax_1 & 0x10, arg2, 5)
    
    arg2[7] = arg1
}
