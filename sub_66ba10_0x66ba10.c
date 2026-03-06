// 函数名称: sub_66ba10
// 虚拟地址: 0x66ba10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66ba10(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* ebx = arg1
    int32_t result
    result.b = *(ebx + 9)
    
    if (result.b u< 8)
        uint32_t eax = zx.d(result.b)
        int32_t i_6 = *ebx
        
        if (eax == 1)
            char* esi_9 = ((i_6 - 1) u>> 3) + arg2
            char* edx_3 = i_6 + arg2 - 1
            result = 7 - ((i_6 - 1) & 7)
            
            if (i_6 != 0)
                int32_t i_5 = i_6
                int32_t i
                
                do
                    ebx.b = *esi_9
                    ecx.b = result.b
                    ebx.b u>>= ecx.b
                    ebx.b &= 1
                    *edx_3 = ebx.b
                    
                    if (result != 7)
                        result += 1
                    else
                        result = 0
                        esi_9 -= 1
                    
                    edx_3 -= 1
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                ebx = arg1
        else if (eax == 2)
            char* esi_6 = ((i_6 - 1) u>> 2) + arg2
            char* edx_2 = i_6 + arg2 - 1
            result = (3 - ((i_6 - 1) & 3)) * 2
            
            if (i_6 != 0)
                int32_t i_4 = i_6
                int32_t i_1
                
                do
                    ebx.b = *esi_6
                    ecx.b = result.b
                    ebx.b u>>= ecx.b
                    ebx.b &= 3
                    *edx_2 = ebx.b
                    
                    if (result != 6)
                        result += 2
                    else
                        result = 0
                        esi_6 -= 1
                    
                    edx_2 -= 1
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                ebx = arg1
        else if (eax == 4)
            char* esi_3 = ((i_6 - 1) u>> 1) + arg2
            char* edx_1 = i_6 + arg2 - 1
            result = (1 - ((i_6 - 1) & 1)) * 4
            
            if (i_6 != 0)
                int32_t i_3 = i_6
                int32_t i_2
                
                do
                    ebx.b = *esi_3
                    ecx.b = result.b
                    ebx.b u>>= ecx.b
                    ebx.b &= 0xf
                    *edx_1 = ebx.b
                    
                    if (result != 4)
                        result = 4
                    else
                        result = 0
                        esi_3 -= 1
                    
                    edx_1 -= 1
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
                ebx = arg1
        
        result.b = *(ebx + 0xa)
        ecx.b = result.b
        ecx.b *= 2
        ecx.b *= 2
        ecx.b *= 2
        *(ebx + 9) = 8
        *(ebx + 0xb) = ecx.b
        ebx[1] = zx.d(result.b) * i_6
    
    return result
}
