// 函数名称: sub_55dda0
// 虚拟地址: 0x55dda0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55dda0(void* arg1, int32_t arg2, int32_t arg3, char arg4, char arg5)
{
    // 第一条实际指令: void var_34
    void var_34
    int32_t var_c = __security_cookie ^ &var_34
    int32_t* eax_2 = nullptr
    int32_t ebx
    int32_t var_38 = ebx
    ebx.b = arg5
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x18)
    int32_t esi
    int32_t var_3c = esi
    var_24 = arg3
    int32_t edi
    int32_t var_40 = edi
    int32_t var_1c = 2
    int32_t var_18 = 0
    void* var_44
    
    if (ebx.b == 0)
        if (arg2 == 0)
            var_44 = "Dx11GraphicsInterface::CreateIndexBuffer"
            sub_4c5870("pIndices", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x1a1, var_44)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t var_20_1 = 0
    else
        int32_t var_20 = 2
        int32_t var_18_1 = 0x10000
    
    if (arg2 != 0)
        int32_t var_30 = 0
        int32_t var_2c_1 = 0
        int32_t var_28_1 = 0
        var_30 = arg2
        eax_2 = &var_30
    
    int32_t* ecx_1 = *(arg1 + 4)
    void* edx_1 = *ecx_1
    var_44 = &var_34
    
    if ((*(edx_1 + 0xc))(ecx_1, &var_24, eax_2, var_44) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x1b2, 
            "Dx11GraphicsInterface::CreateIndexBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_6 = sub_563dc0(arg1 + 0x40)
    void* edx_2 = var_44
    *(eax_6 + 5) = arg4
    eax_6[1].b = ebx.b
    eax_6[6] = edx_2
    *eax_6 = 1
    int32_t result = eax_6[0x92]
    sub_5a6aba(var_1c ^ &var_44)
    return result
}
