// 函数名称: sub_593f90
// 虚拟地址: 0x593f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_593f90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_20 = edi
    int32_t* eax_1 = sub_5a898b(arg2, "rb")
    
    if (eax_1 != 0)
        int128_t* eax_2 = sub_661fc0("1.5.12", 0, 0, 0)
        int128_t* var_8 = eax_2
        
        if (eax_2 != 0)
            int128_t* eax_3 = sub_663760(eax_2)
            int128_t* var_c = eax_3
            
            if (eax_3 == 0)
                sub_5a8c61(eax_1)
                sub_661ff0(&var_8, nullptr, nullptr)
                int32_t* eax_4
                eax_4.b = 0
                return eax_4
            
            int32_t __saved_ebp
            __setjmp3(&__saved_ebp, eax_1, edi, sub_664090(var_8, sub_5ab190, 0x40), 0)
            sub_6627a0(var_8, eax_1)
            sub_6620c0(var_8, 0)
            int32_t var_34_1 = 0
            sub_661dc0(var_8, var_c, 0x95)
            int32_t eax_10 = sub_660ee0(var_8, var_c)
            int128_t* edx_3 = var_c
            arg1[1] = eax_10
            int32_t eax_12 = sub_660f00(var_8, edx_3)
            int128_t* ecx_3 = var_c
            int128_t* edx_4 = var_8
            arg1[2] = eax_12
            uint32_t eax_14 = zx.d(sub_660f20(edx_4, ecx_3))
            
            if (eax_14 == 2)
                arg1[4] = 4
            else
                if (eax_14 != 6)
                    sub_4c5870("Halt", &data_83f3d3, "PngImport.cpp", 0x78, "PngImportFileToImageSpec")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                arg1[4] = 1
            
            int32_t eax_18 = sub_5540b0(arg1[4], arg1[1])
            int32_t ecx_4 = arg1[1]
            arg1[3] = eax_18
            arg1[2]
            int32_t eax_21
            int32_t edx_5
            eax_21, edx_5 = sub_4cce80(sub_554170(arg1[4], edx_4, ecx_4))
            *arg1 = eax_21
            int128_t* var_24_5 = var_8
            sub_593e90(var_c, arg1, edx_5)
            sub_661ff0(&var_8, &var_c, nullptr)
            sub_5a8c61(eax_1)
            int32_t eax_25
            eax_25.b = 1
            return eax_25
        
        sub_5a8c61(eax_1)
    
    eax_1.b = 0
    return eax_1
}
