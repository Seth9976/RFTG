// 函数名称: sub_681c00
// 虚拟地址: 0x681c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_681c00(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* result = *(arg1 + 0x70)
    void* result = *(arg1 + 0x70)
    int32_t ebx = *(*(arg1 + 0x1cc) + 0x18)
    int32_t edi = 0
    arg1 = result
    
    if (arg3 s> 0)
        do
            void* ecx_1 = *(arg2 + (edi << 2))
            void* esi_1 = result
            
            if (result != 0)
                void* i
                
                do
                    uint32_t eax_4 = (zx.d(*(ecx_1 + 1)) u>> 2 << 5) + (zx.d(*(ecx_1 + 2)) u>> 3)
                    int32_t edx_6 = *(ebx + (zx.d(*ecx_1) u>> 3 << 2))
                    int16_t temp0_1 = *(edx_6 + (eax_4 << 1))
                    *(edx_6 + (eax_4 << 1)) += 1
                    int16_t* eax_5 = edx_6 + (eax_4 << 1)
                    edx_6.w = *eax_5
                    
                    if (temp0_1 == 0xffff)
                        *eax_5 = edx_6.w - 1
                    
                    ecx_1 += 3
                    i = esi_1
                    esi_1 -= 1
                while (i != 1)
                result = arg1
            
            edi += 1
        while (edi s< arg3)
    
    return result
}
