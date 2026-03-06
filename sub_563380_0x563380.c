// 函数名称: sub_563380
// 虚拟地址: 0x563380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_563380(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_44
    sub_5abfc0(&var_44, 0, 0x3c)
    int32_t var_38 = 1
    int32_t var_14 = 1
    int32_t var_64
    __builtin_memset(&var_64, 0, 0x14)
    void* eax_2 = data_27e7fd0
    int32_t edx_1 = *(eax_2 + 0x14)
    int32_t edx
    int32_t var_18 = edx
    int32_t esi_1 = *(eax_2 + 0x18)
    int32_t eax_3 = *(eax_2 + 0x1c)
    int32_t var_1c = 2
    int32_t var_34 = 0x57
    int32_t var_3c = 0
    int32_t var_20 = 0x20
    int32_t var_10 = 0
    var_64 = 0x57
    int32_t var_60 = 4
    var_44 = edx_1
    int32_t var_40 = esi_1
    int32_t var_24 = 0
    int32_t var_48
    int32_t ecx
    
    if (eax_3 s<= 1)
        eax_3 = 1
        ecx = 3
        var_48 = 4
    else
        ecx = 5
        var_48 = 6
        int32_t var_60_1 = 6
    
    int32_t var_28 = eax_3
    *(arg1 + 0x68) = eax_3
    
    if (*(arg1 + 0x18) != 0)
        sub_4c5870("mainBackBufferAsset == NULL", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x965, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(arg1 + 0x18) = sub_50bd60(edx_1, esi_1, 1, ecx)
    int128_t* eax_6 = sub_563dc0(arg1 + 0x40)
    *eax_6 = 2
    int32_t* eax_7 = *(arg1 + 0x18)
    
    if (eax_7[1] != 3)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
            "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_9 = sub_466320(eax_7)
    *(eax_9 + 4) = *(eax_6 + 0x248)
    void* eax_10 = data_27e7fd0
    
    if (*(eax_10 + 0x20) != 0)
        *(arg1 + 0x1c) = sub_50bd60(*(eax_10 + 0x14), *(eax_10 + 0x18), 0x50, var_48)
        eax_10 = data_27e7fd0
    
    if (*(eax_10 + 0x22) != 0)
        int32_t var_14_1 = 0
    
    int32_t* eax_13 = *(arg1 + 8)
    
    if ((*(*eax_13 + 0x28))(eax_13, *(arg1 + 4), &var_44, arg1 + 0x14) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x981, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx_1 = *(arg1 + 0x14)
    
    if ((*(*ebx_1 + 0x24))(ebx_1, 0, 0x89426c, eax_6 + 0x1c) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x984, 
            "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi_1 = *(arg1 + 4)
    int32_t result = (*(*edi_1 + 0x24))(edi_1, *(eax_6 + 0x1c), &var_64, &eax_6[3])
    
    if (result s>= 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x987, 
        "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
