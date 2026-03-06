// 函数名称: sub_553ec0
// 虚拟地址: 0x553ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_553ec0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t result = arg5
    int32_t i_1 = arg7
    
    if (arg3 == result)
        sub_4c5870("pSourceBuffer != pDestBuffer", &data_83f3d3, "ImageUtils.cpp", 0x28, 
            "ImageBufferFlipCopy24BitTo32Bit")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi_3 = (arg8 - 1) * arg6 + result
    
    if (esi_3 u>= result)
        void* edi_1 = arg3 + 1
        void* var_8_1 = edi_1
        
        do
            int32_t* ecx = esi_3
            
            if (i_1 s> 0)
                void* eax_1 = edi_1
                int32_t i
                
                do
                    *ecx = ((((zx.d(*(eax_1 + 1)) + 0xff00) << 8) + zx.d(*eax_1)) << 8)
                        + zx.d(*(eax_1 - 1))
                    ecx = &ecx[1]
                    eax_1 += 3
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                i_1 = arg7
                result = arg5
            
            edi_1 = var_8_1 + arg4
            esi_3 -= arg6
            var_8_1 = edi_1
        while (esi_3 u>= result)
    
    return result
}
