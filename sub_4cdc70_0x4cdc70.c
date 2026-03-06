// 函数名称: sub_4cdc70
// 虚拟地址: 0x4cdc70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4cdc70(int32_t* arg1 @ esi, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx = arg5
    int32_t ecx = arg5
    
    if (ecx u> 0x5f5e0ff)
        sub_4c5870("count >= 0 && count < 100000000", &data_83f3d3, "DefBin.cpp", 0x1c8, 
            "DefBinSerializeVariableArray")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax = arg3[0xa]
    
    if ((eax.b & 0x10) != 0)
        arg5 = 0
        ecx = 0
    
    int32_t* eax_1 = arg1[4]
    
    if ((eax & 0x100) == 0)
        if (eax_1 != 0 && *eax_1 != 0 && ecx != 0)
            sub_4c5870(
                "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer.pDataSizeWithoutHWBuffers == 0 || "
            "count == 0", 
                &data_83f3d3, "DefBin.cpp", 0x1dc, "DefBinSerializeVariableArray")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else if (eax_1 != 0 && *eax_1 == 0)
        *eax_1 = arg1[2]
    
    int32_t* eax_4 = arg1[1] + *arg3 + *arg1
    
    if (ecx == 0)
        if (arg1[3].b == ecx.b)
            *eax_4 = ecx
        
        return eax_4
    
    int32_t ecx_3 = (arg1[2] + 3) & 0xfffffffc
    bool cond:1 = arg1[3].b != 0
    arg1[2] = ecx_3
    
    if (not(cond:1))
        *eax_4 = ecx_3
    
    void* edi_1 = sub_4fe2c0(arg3[6]) * arg5
    int128_t* ebx_1 = *(arg2 + *arg3)
    
    if (arg1[3].b == 0)
        sub_5ab990(*arg1 + arg1[2], ebx_1, edi_1)
    
    int32_t eax_9 = arg1[1]
    void* eax_10 = arg1[2]
    arg1[1] = eax_10
    int32_t var_18_2 = arg4
    arg1[2] = eax_10 + edi_1
    int32_t* var_1c_2 = arg3
    uint32_t eax_14 = sub_4cda90(arg1, arg3, arg4, ebx_1, arg5)
    arg1[1] = eax_9
    return eax_14
}
