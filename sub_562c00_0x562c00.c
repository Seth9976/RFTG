// 函数名称: sub_562c00
// 虚拟地址: 0x562c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_562c00(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax_1 = sub_50ba10(arg1)
    void* eax_1 = sub_50ba10(arg1)
    void* edx = data_3079204
    void* edi
    
    if (eax_1 != 0)
        uint32_t ecx_1 = zx.d(eax_1.w)
        
        if (ecx_1 u< *(edx + 0x44))
            void* ecx_3 = ecx_1 * 0x24c + *(edx + 0x40)
            int32_t edx_1
            edx_1.b = *(ecx_3 + 0x248) != eax_1
            edi = (edx_1 - 1) & ecx_3
        else
            edi = nullptr
    else
        edi = nullptr
    
    void* eax_2 = sub_50ba10(arg2)
    void* edx_2 = data_3079204
    void* esi
    
    if (eax_2 != 0)
        uint32_t ecx_4 = zx.d(eax_2.w)
        
        if (ecx_4 u< *(edx_2 + 0x44))
            void* ecx_6 = ecx_4 * 0x24c + *(edx_2 + 0x40)
            int32_t edx_3
            edx_3.b = *(ecx_6 + 0x248) != eax_2
            esi = (edx_3 - 1) & ecx_6
        else
            esi = nullptr
    else
        esi = nullptr
    
    if (arg2[1] == 3)
        int32_t* eax_4
        int32_t ecx_7
        eax_4, ecx_7 = sub_466320(arg2)
        int32_t eax_6 = sub_55e050(ecx_7, *(*eax_4 + 0x14))
        int32_t* ecx_9 = *(data_3079204 + 0x10)
        return (*(*ecx_9 + 0xe4))(ecx_9, *(esi + 0x1c), 0, *(edi + 0x1c), 0, eax_6)
    
    sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, "c:\ax2010\engine\Texture.h", 
        0x83, "TextureGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
