// 函数名称: sub_545f10
// 虚拟地址: 0x545f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_545f10(int32_t arg1)
{
    // 第一条实际指令: int32_t i_1
    int32_t i_1
    int32_t i_2 = i_1
    void* result_1 = nullptr
    
    while (true)
        void* edx_1 = data_307882c
        void* result
        
        do
            if (result_1 != 0)
                result = result_1 + 0x14c
            else
                result = *(edx_1 + 0x4240)
            
            int32_t ecx_3 = *(edx_1 + 0x4244) * 0x14c + *(edx_1 + 0x4240)
            
            if (result u>= ecx_3)
                return result
            
            while ((*(result + 0x148) & 0xffff0000) == 0)
                result += 0x14c
                
                if (result u>= ecx_3)
                    return result
            
            result_1 = result
        while (*(result + 4) != 0)
        
        void* esi_1 = result + 0x14
        i_1 = 0x10
        int32_t i
        
        do
            if (*esi_1 != 0 && *(esi_1 + 4) == arg1)
                data_3079e28(1, esi_1)
                *esi_1 = 0
                *(esi_1 + 4) = 0
                *(esi_1 + 8) = 0
            
            esi_1 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)
}
