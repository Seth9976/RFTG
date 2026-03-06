// 函数名称: sub_50bb10
// 虚拟地址: 0x50bb10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_50bb10(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_10 = ebx
    int32_t eax = *(arg1 + 4)
    
    if (eax != 0)
        (*(*data_3078804 + 0x14))(eax)
        *(arg1 + 4) = 0
    
    int32_t result = *(arg1 + 8)
    
    if (result != 0)
        result = _aligned_free_base(result)
        *(arg1 + 8) = 0
    
    if (*(arg1 + 0xc) == 0)
        return result
    
    EnterCriticalSection(data_30785dc + 4)
    
    for (char i = 1; i != 0; )
        ebx.b = 0
        int32_t edi_1 = 0
        
        while (true)
            int32_t edx_2 = data_30785dc
            
            if (*(edi_1 + edx_2 + 0x24) != 0)
                int32_t* eax_2 = *(edi_1 + edx_2 + 0x28)
                
                if (eax_2[1] != 3)
                    sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                        "c:\ax2010\engine\Texture.h", 0x83, "TextureGetDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (sub_466320(eax_2) == arg1)
                    ebx.b = 1
                    
                    if (*(edi_1 + edx_2 + 0x24) == 1)
                        LeaveCriticalSection(data_30785dc + 4)
                        Sleep(0x64)
                        EnterCriticalSection(data_30785dc + 4)
                        break
                    
                    i = 0
                    sub_50b800(*(edi_1 + edx_2 + 0x28))
                    *(edi_1 + edx_2 + 0x24) = 0
                    *(edi_1 + edx_2 + 0x28) = 0
            
            edi_1 += 8
            
            if (edi_1 s>= 0x50)
                if (ebx.b != 0)
                    break
                
                sub_4c5870("foundIt", &data_83f3d3, "Texture.cpp", 0x34b, 
                    "TextureUnbindGraphicsBuffers")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    
    return LeaveCriticalSection(data_30785dc + 4)
}
