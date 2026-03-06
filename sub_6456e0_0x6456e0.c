// 函数名称: sub_6456e0
// 虚拟地址: 0x6456e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6456e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    
    if (arg1 == 0)
        return 
    
    *(*arg1 + 0x16) = 0
    *(*arg1 + 0x17) = 0
    *(*arg1 + 0x18) = 0
    *(*arg1 + 0x19) = 0
    int32_t esi_5 = arg1[1]
    int32_t eax_1 = 0
    
    if (esi_5 s> 0)
        do
            eax_1 = eax_1 << 8 ^ *(((zx.d(*(*arg1 + edx)) ^ eax_1 u>> 0x18) << 2) + &data_6bc630)
            edx += 1
        while (edx s< esi_5)
        
        edx = 0
    
    int32_t esi_6 = arg1[3]
    
    if (esi_6 s> 0)
        do
            eax_1 = eax_1 << 8 ^ *(((zx.d(*(arg1[2] + edx)) ^ eax_1 u>> 0x18) << 2) + &data_6bc630)
            edx += 1
        while (edx s< esi_6)
    
    *(*arg1 + 0x16) = eax_1.b
    *(*arg1 + 0x17) = (eax_1 u>> 8).b
    *(*arg1 + 0x18) = (eax_1 u>> 0x10).b
    *(*arg1 + 0x19) = (eax_1 u>> 0x18).b
}
