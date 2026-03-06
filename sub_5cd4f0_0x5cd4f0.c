// 函数名称: sub_5cd4f0
// 虚拟地址: 0x5cd4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5cd4f0(uint32_t arg1, uint32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: uint32_t ecx = arg2
    uint32_t ecx = arg2
    char* result = arg3
    uint32_t esi = arg1
    char* result_3 = result
    
    if ((esi | ecx) == 0)
        *result = 0x30
        result_3 = &result[1]
    else if (ecx != 0 || esi != 0)
        uint32_t eax_3
        uint32_t edx_1
        edx_1:eax_3 = sx.q(arg4)
        
        while (true)
            uint32_t eax_5
            int32_t ecx_1
            uint32_t edx_3
            eax_5, ecx_1, edx_3 = __aulldvrm(esi, ecx, eax_3, edx_1)
            ecx_1.b = (*"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZI64")[ecx_1]
            *result_3 = ecx_1.b
            ecx = edx_3
            result_3 = &result_3[1]
            char* result_2 = result
            esi = eax_5
            
            if (ecx u<= 0)
                if (ecx u< 0)
                    break
                
                if (esi == 0)
                    break
        
        result = arg3
    
    char* result_1 = result
    *result_3 = 0
    sub_5cd3d0()
    return result
}
