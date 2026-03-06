// 函数名称: sub_5628f0
// 虚拟地址: 0x5628f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_5628f0(void* arg1, float arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg2 i+ 0x350)
    int32_t* esi = *(arg2 i+ 0x350)
    int32_t eax_1 = sub_54c6a0(*esi)
    
    if (eax_1 != 0)
        uint32_t ebx_1 = zx.d(eax_1.w)
        
        if (ebx_1 u< *(arg1 + 0x44))
            int32_t* ebx_3 = ebx_1 * 0x24c + *(arg1 + 0x40)
            
            if (ebx_3[0x92] == eax_1)
                int32_t* eax_2 = *(arg1 + 0x10)
                *(arg1 + 0x5c) = *esi
                (*(*eax_2 + 0x2c))(eax_2, ebx_3[0xa], 0, 0)
                sub_5627a0(esi, esi, ebx_3, arg2)
                eax_1 = sub_54c6a0(*0x42d)
                
                if (eax_1 != 0)
                    uint32_t ebx_5 = zx.d(eax_1.w)
                    
                    if (ebx_5 u< *0x44)
                        int32_t* ebx_7 = ebx_5 * 0x24c + *0x40
                        
                        if (ebx_7[0x92] == eax_1)
                            int32_t* eax_4 = *0x10
                            (*(*eax_4 + 0x24))(eax_4, ebx_7[0xb], 0, 0)
                            sub_5627a0(1, 0x42d, ebx_7, arg2)
                            int32_t* esi_1 = *0xeb9
                            void* ecx_5 = data_3079204
                            
                            if (esi_1 != 0)
                                uint32_t eax_6 = zx.d(esi_1.w)
                                
                                if (eax_6 u< *(ecx_5 + 0x44))
                                    void* eax_8 = eax_6 * 0x24c + *(ecx_5 + 0x40)
                                    int32_t edx_5
                                    edx_5.b = *(eax_8 + 0x248) != esi_1
                                    esi_1 = (edx_5 - 1) & eax_8
                                else
                                    esi_1 = nullptr
                            
                            if (*esi_1 != 5)
                                sub_4c5870("bufferDataMaterial->mBufferType == DX11BUFFER_MATERIAL", 
                                    &data_83f3d3, "Windows\WindowsDx11.cpp", 0x82e, 
                                    "Dx11GraphicsInterface::GraphicsMaterialSetup")
                                
                                if (IsDebuggerPresent() != 1)
                                    sub_4c5a30()
                                    noreturn
                                
                                breakpoint
                            
                            int32_t* eax_10 = *0x10
                            (*(*eax_10 + 0x8c))(eax_10, esi_1[0x80], 0, 0xffffffff)
                            int32_t* eax_12 = *0x10
                            (*(*eax_12 + 0x90))(eax_12, esi_1[0x7f], 0)
                            bool eax_14 = sub_4e57c0()
                            int32_t* edi_1 = *0x10
                            int32_t eax_15 = *(*edi_1 + 0xac)
                            
                            if (eax_14 == 0)
                                eax_15(edi_1, esi_1[0x7d])
                                int32_t eax_17
                                eax_17.b = 1
                                return eax_17
                            
                            eax_15(edi_1, esi_1[0x7e])
                            int32_t eax_16
                            eax_16.b = 1
                            return eax_16
    
    eax_1.b = 0
    return eax_1
}
