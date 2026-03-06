// 函数名称: sub_563a90
// 虚拟地址: 0x563a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_563a90(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg3[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_4 = sub_466320(arg3)
    int32_t var_34
    sub_5abfc0(&var_34, 0, 0x2c)
    var_34 = **eax_4
    void* ecx = *eax_4
    int32_t var_30 = *(ecx + 4)
    int32_t var_2c = 1
    int32_t var_28 = 1
    int32_t var_24 = sub_55e050(ecx, *(*eax_4 + 0x14))
    int32_t var_20 = 1
    int32_t var_1c = 0
    int32_t var_18 = 3
    int32_t var_10 = 0x20000
    int32_t var_c = 0
    int32_t* eax_8 = *(data_3079204 + 4)
    int32_t* var_38
    
    if ((*(*eax_8 + 0x14))(eax_8, &var_34, 0, &var_38) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0xa4c, 
            "Dx11GetTextureBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_11 = sub_50ba10(arg3)
    void* edi = data_3079204
    void* ecx_2
    
    if (eax_11 != 0)
        uint32_t ecx_3 = zx.d(eax_11.w)
        
        if (ecx_3 u< *(edi + 0x44))
            void* ecx_5 = ecx_3 * 0x24c + *(edi + 0x40)
            int32_t ecx_6
            ecx_6.b = *(ecx_5 + 0x248) != eax_11
            ecx_2 = (ecx_6 - 1) & ecx_5
        else
            ecx_2 = nullptr
    else
        ecx_2 = nullptr
    
    int32_t* eax_12 = *(edi + 0x10)
    (*(*eax_12 + 0xbc))(eax_12, var_38, *(ecx_2 + 0x1c))
    int32_t* edx_7 = var_38
    int32_t var_44 = 0
    int32_t var_40 = 0
    int32_t var_3c = 0
    int32_t* eax_14 = *(data_3079204 + 0x10)
    
    if ((*(*eax_14 + 0x38))(eax_14, edx_7, 0, 1, 0, &var_44) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0xa55, 
            "Dx11GetTextureBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_18 = *eax_4
    int32_t edx_8 = eax_18[1]
    int32_t var_5c = var_44
    int32_t ecx_12 = *eax_18
    int32_t var_4c = eax_18[5]
    int32_t var_58 = ecx_12
    int32_t var_54 = edx_8
    int32_t var_50 = var_40
    
    if (*arg4 == 0)
        sub_4c5870("destSpec->pImage", &data_83f3d3, "Windows\WindowsDx11.cpp", 0xa5e, 
            "Dx11GetTextureBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg4[1] != ecx_12)
        sub_4c5870("destSpec->width == sourceSpec.width", &data_83f3d3, "Windows\WindowsDx11.cpp", 
            0xa5f, "Dx11GetTextureBits")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg4[2] == edx_8)
        sub_554750(arg4)
        int32_t* eax_24 = *(data_3079204 + 0x10)
        (*(*eax_24 + 0x3c))(eax_24, var_38, 0)
        int32_t* eax_25 = var_38
        int32_t result = (*(*eax_25 + 8))(eax_25)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("destSpec->height == sourceSpec.height", &data_83f3d3, "Windows\WindowsDx11.cpp", 0xa60, 
        "Dx11GetTextureBits")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
