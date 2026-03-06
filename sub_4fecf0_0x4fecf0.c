// 函数名称: sub_4fecf0
// 虚拟地址: 0x4fecf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4fecf0(int32_t* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t esi = *(arg2 + 8)
    int32_t esi_1 = neg.d(esi)
    int32_t i = neg.d(sbb.d(esi_1, esi_1, esi != 0)) - 1
    
    while (i != 0xffffffff)
        int32_t eax_3 = i * 0xf
        i += 1
        
        if (i s>= *(arg2 + 8))
            i = 0xffffffff
        
        sub_4feb10(arg3, arg1, *(arg2 + 4) + (eax_3 << 2))
}
