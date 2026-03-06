// 函数名称: sub_5d6b20
// 虚拟地址: 0x5d6b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5d6b20(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* eax = *(arg2 + 4)
    int32_t* eax = *(arg2 + 4)
    
    if (eax != 0)
        int32_t edx_1 = *eax
        int32_t ecx_1 = 0
        
        if (edx_1 s> 0)
            char* eax_1 = eax[1]
            
            while (*eax_1 == 0xff)
                if (eax_1[1] != 0xff)
                    break
                
                if (eax_1[2] != 0xff)
                    break
                
                ecx_1 += 1
                eax_1 = &eax_1[4]
                
                if (ecx_1 s>= edx_1)
                    break
        
        if (ecx_1 == edx_1)
            sub_5cce60("Empty destination palette")
            return 0
    
    int32_t var_34 = *(arg2 + 0x18)
    char* result = sub_5d6670(arg3, arg1[2], arg1[3], zx.d(*(arg2 + 8)), *(arg2 + 0xc), *(arg2 + 0x10), 
        *(arg2 + 0x14))
    
    if (result == 0)
        return result
    
    if (*(arg2 + 4) != 0)
        void* ecx_5 = *(*(result + 4) + 4)
        
        if (ecx_5 != 0)
            int32_t* eax_6 = *(arg2 + 4)
            int32_t var_34_1 = *eax_6 * 4
            int32_t var_38_1 = eax_6[1]
            int32_t var_3c_1 = *(ecx_5 + 4)
            sub_5cd110()
            **(*(result + 4) + 4) = **(arg2 + 4)
    
    void* eax_9 = arg1[0xd]
    char edx_10 = *(eax_9 + 0x4d)
    int32_t ebx_1 = *(eax_9 + 0x44)
    char var_8 = *(eax_9 + 0x4c)
    char ecx_9 = *(eax_9 + 0x4e)
    char edx_11 = *(eax_9 + 0x4f)
    *(eax_9 + 0x4c) = 0xff
    *(arg1[0xd] + 0x4d) = 0xff
    *(arg1[0xd] + 0x4e) = 0xff
    *(arg1[0xd] + 0x4f) = 0xff
    *(arg1[0xd] + 0x44) = 0
    sub_5d8400(arg1[0xd])
    int32_t var_1c = arg1[2]
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t var_18 = arg1[3]
    sub_5d5ff0(arg1, &var_24, result, &var_24)
    char eax_13 = var_8
    *(*(result + 0x34) + 0x4c) = eax_13
    *(*(result + 0x34) + 0x4d) = edx_10
    *(*(result + 0x34) + 0x4e) = ecx_9
    *(*(result + 0x34) + 0x4f) = edx_11
    *(*(result + 0x34) + 0x44) = ebx_1 & 0xffff8eef
    *(arg1[0xd] + 0x4c) = eax_13
    *(arg1[0xd] + 0x4d) = edx_10
    *(arg1[0xd] + 0x4e) = ecx_9
    *(arg1[0xd] + 0x4f) = edx_11
    *(arg1[0xd] + 0x44) = ebx_1
    sub_5d8400(arg1[0xd])
    
    if ((ebx_1 & 0x100) != 0)
        void* edx_22 = arg1[1]
        int32_t* ecx_20 = *(edx_22 + 4)
        
        if (ecx_20 == 0)
        label_5d6d3a:
            int32_t var_14
            int32_t var_10
            int32_t var_c
            sub_5d7f70(*(arg1[0xd] + 0x48), arg1[1], &var_14, &var_10, &var_c, &var_8)
            sub_5d5cf0(result, 1, sub_5d7e30(*(result + 4), var_14.b, var_10.b, var_c.b, (var_8.d).b))
            sub_5d6870(result)
        else
            int32_t* eax_18 = *(arg2 + 4)
            int32_t eax_20
            
            if (eax_18 != 0 && *ecx_20 s<= *eax_18)
                int32_t* ecx_22 = *(edx_22 + 4)
                eax_20 = sub_5cd130(ecx_22[1], eax_18[1], *ecx_22 * 4)
            
            if (eax_18 != 0 && *ecx_20 s<= *eax_18 && eax_20 == 0)
                sub_5d5cf0(result, 1, *(arg1[0xd] + 0x48))
            else if (*(arg2 + 0x18) == 0)
                goto label_5d6d3a
    
    sub_5d5f90(result, &arg1[9])
    
    if (*(arg1[1] + 0x18) == 0)
        if ((ebx_1 & 0x102) != 0)
            sub_5d5f00(result, 1)
    else if (*(arg2 + 0x18) != 0 || (ebx_1 & 0x102) != 0)
        sub_5d5f00(result, 1)
    
    if ((ebx_1 & 0x1000) != 0 || (arg3.b & 2) != 0)
        sub_5d5cb0(result, 2)
    
    return result
}
