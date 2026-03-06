// 函数名称: sub_54a040
// 虚拟地址: 0x54a040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_54a040(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_1 = zx.d(arg2.w)
        
        if (eax_1 u< *(arg1 + 0x4244))
            int32_t* eax_3 = eax_1 * 0x14c + *(arg1 + 0x4240)
            
            if (eax_3[0x52] == arg2)
                if (eax_3[0x4f].b != 0)
                    int32_t eax_5 = eax_3[0x37]
                    
                    if (eax_5 s< 0 || eax_5 s>= 0x11)
                        sub_4c5870(
                            "vertexBufferData->mBufferFormat >= 0 && vertexBufferData->mBufferFormat < 
                                VERTEX_FORMAT_COUNT", 
                            &data_83f3d3, "OpenGLGraphics.cpp", 0x139c, 
                            "OpenGLInterface::GetSortVertexBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* esi_1 = eax_5 * 0xc0 + data_307882c + 0x4370
                    int32_t eax_9 = sub_54c6a0(*arg3)
                    void* edx_2 = esi_1
                    
                    for (int32_t i = 0; i s< 0x10; )
                        if (*(edx_2 + 4) == eax_9)
                            return *edx_2
                        
                        i += 1
                        edx_2 += 0xc
                
                return *eax_3
    
    return 0
}
