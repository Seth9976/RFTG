// 函数名称: sub_67d580
// 虚拟地址: 0x67d580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67d580(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* result = *(esi + 0x1a8)
    void* result_1 = result
    int32_t var_8 = 0
    
    if (*(esi + 0x24) s> 0)
        void* ebx_1 = *(esi + 0xd8) + 0xc
        
        while (true)
            uint32_t ecx_2 = *(ebx_1 + 0x18) * *ebx_1
            int32_t temp0_1 = divs.dp.d(sx.q(ecx_2), *(esi + 0x13c))
            uint32_t esi_1 = modu.dp.d(0:(*(ebx_1 + 0x20)), ecx_2)
            
            if (esi_1 == 0)
                esi_1 = ecx_2
            
            int32_t ecx_3 = var_8
            void* result_3
            
            if (ecx_3 != 0)
                result_3 = result_1
            else
                result_3 = result_1
                *(result_3 + 0x48) = divs.dp.d(sx.q(esi_1 - 1), temp0_1) + 1
            
            result = *(*(result_3 + (*(result_3 + 0x40) << 2) + 0x38) + (ecx_3 << 2))
            int32_t i_1 = temp0_1 * 2
            
            if (i_1 s> 0)
                void* result_2 = result + (esi_1 << 2)
                result = result_2
                int32_t i
                
                do
                    *result = *(result_2 - 4)
                    result += 4
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                ecx_3 = var_8
            
            ebx_1 += 0x54
            var_8 = ecx_3 + 1
            
            if (ecx_3 + 1 s>= *(arg1 + 0x24))
                break
            
            esi = arg1
    
    return result
}
