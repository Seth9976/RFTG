// 函数名称: sub_55e950
// 虚拟地址: 0x55e950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55e950(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg2
    int32_t result = arg2
    
    if (result != 0)
        uint32_t esi_1 = zx.d(result.w)
        
        if (esi_1 u< *(arg1 + 0x44))
            int32_t* esi_3 = esi_1 * 0x24c + *(arg1 + 0x40)
            
            if (esi_3[0x92] == result)
                if (*esi_3 != 2)
                    sub_4c5870("bufferData->mBufferType == DX11BUFFER_TEXTURE", &data_83f3d3, 
                        "Windows\WindowsDx11.cpp", 0x30d, "Dx11GraphicsInterface::ReleaseTextureBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (esi_3[2] != 0)
                    sub_4c5870("bufferData->mBufferPtr == NULL", &data_83f3d3, 
                        "Windows\WindowsDx11.cpp", 0x30e, "Dx11GraphicsInterface::ReleaseTextureBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_2 = esi_3[8]
                
                if (eax_2 != 0)
                    (*(*eax_2 + 8))(eax_2)
                
                int32_t* eax_3 = esi_3[0xc]
                
                if (eax_3 != 0)
                    (*(*eax_3 + 8))(eax_3)
                
                int32_t* eax_4 = esi_3[9]
                
                if (eax_4 != 0)
                    (*(*eax_4 + 8))(eax_4)
                
                int32_t* eax_5 = esi_3[7]
                
                if (eax_5 != 0)
                    (*(*eax_5 + 8))(eax_5)
                
                result = *(arg1 + 0x4c)
                *(arg1 + 0x4c) = zx.d(esi_3[0x92].w)
                esi_3[0x92] = result
                *(arg1 + 0x50) -= 1
    
    return result
}
