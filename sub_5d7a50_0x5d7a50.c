// 函数名称: sub_5d7a50
// 虚拟地址: 0x5d7a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d7a50(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t var_18
    uint32_t var_18
    uint32_t var_14
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    
    if (sub_5d7350(arg2, &var_8, &var_c, &var_10, &var_14, &var_18) == 0)
        return 0xffffffff
    
    int32_t var_28_1 = 0x2c
    int32_t var_2c_1 = 0
    int32_t* var_30_1 = arg1
    sub_5cd100()
    uint32_t eax_2 = var_8
    arg1[2].b = eax_2.b
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 7)
    *(arg1 + 9) = ((eax_4 + (edx & 7)) s>> 3).b
    uint32_t eax_7 = var_c
    char ecx = 8
    *arg1 = arg2
    arg1[3] = eax_7
    arg1[8].b = 0
    arg1[7].b = 8
    int32_t edx_1
    
    if (eax_7 != 0)
        if ((eax_7.b & 1) == 0)
            edx_1.b = 0
            
            do
                eax_7 u>>= 1
                edx_1.b += 1
            while ((eax_7.b & 1) == 0)
            
            arg1[8].b = edx_1.b
        
        edx_1.b = 8
        
        do
            eax_7 u>>= 1
            edx_1.b -= 1
        while ((eax_7.b & 1) != 0)
        
        arg1[7].b = edx_1.b
    
    uint32_t eax_8 = var_10
    arg1[4] = eax_8
    *(arg1 + 0x21) = 0
    *(arg1 + 0x1d) = 8
    
    if (eax_8 != 0)
        if ((eax_8.b & 1) == 0)
            edx_1.b = 0
            
            do
                eax_8 u>>= 1
                edx_1.b += 1
            while ((eax_8.b & 1) == 0)
            
            *(arg1 + 0x21) = edx_1.b
        
        edx_1.b = 8
        
        do
            eax_8 u>>= 1
            edx_1.b -= 1
        while ((eax_8.b & 1) != 0)
        
        *(arg1 + 0x1d) = edx_1.b
    
    uint32_t eax_9 = var_14
    arg1[5] = eax_9
    *(arg1 + 0x22) = 0
    *(arg1 + 0x1e) = 8
    
    if (eax_9 != 0)
        if ((eax_9.b & 1) == 0)
            edx_1.b = 0
            
            do
                eax_9 u>>= 1
                edx_1.b += 1
            while ((eax_9.b & 1) == 0)
            
            *(arg1 + 0x22) = edx_1.b
        
        edx_1.b = 8
        
        do
            eax_9 u>>= 1
            edx_1.b -= 1
        while ((eax_9.b & 1) != 0)
        
        *(arg1 + 0x1e) = edx_1.b
    
    uint32_t eax_10 = var_18
    arg1[6] = eax_10
    *(arg1 + 0x23) = 0
    *(arg1 + 0x1f) = 8
    
    if (eax_10 != 0)
        if ((eax_10.b & 1) == 0)
            edx_1.b = 0
            
            do
                eax_10 u>>= 1
                edx_1.b += 1
            while ((eax_10.b & 1) == 0)
            
            *(arg1 + 0x23) = edx_1.b
        
        do
            eax_10 u>>= 1
            ecx -= 1
        while ((eax_10.b & 1) != 0)
        
        *(arg1 + 0x1f) = ecx
    
    arg1[1] = 0
    arg1[0xa] = 0
    arg1[9] = 1
    return 0
}
