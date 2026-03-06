// 函数名称: sub_46b5e0
// 虚拟地址: 0x46b5e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46b5e0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = 0
    int32_t var_8_1 = 0
    
    if (arg3 s<= 0)
        return eax
    
    do
        int32_t ecx_2 = *(arg2 + (eax << 2))
        void* ecx_4 = *(arg1 + ecx_2 * 0x14 + 0x46c)
        int32_t i = 0
        
        if (*(ecx_4 + 0x15) s> 0)
            void* esi_1 = ecx_4 + 0x28
            
            do
                if (*(esi_1 - 0x10) == 3 && (*(esi_1 - 8) & 0x80) != 0)
                    *(arg1 + ecx_2 * 0x14 + 0x468) |= 1 << (i.b + 8)
                    var_8_1 += sx.d(*esi_1)
                
                i += 1
                esi_1 += 0x18
            while (i s< sx.d(*(*(arg1 + ecx_2 * 0x14 + 0x46c) + 0x15)))
        
        eax += 1
    while (eax s< arg3)
    
    return var_8_1
}
