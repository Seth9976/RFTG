// 函数名称: sub_51a360
// 虚拟地址: 0x51a360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_51a360(HDROP arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696f5b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_154 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    HDROP hDrop = arg1
    HDROP hDrop_1 = hDrop
    SetFocus(data_30785e0)
    uint32_t result = DragQueryFileA(hDrop, 0xffffffff, nullptr, 0)
    uint32_t iFile = 0
    uint32_t result_1 = result
    uint32_t iFile_1 = 0
    
    if (result s> 0)
        while (true)
            void lpszFile
            DragQueryFileA(hDrop, iFile, &lpszFile, 0x100)
            int32_t var_8_1 = 0
            int32_t var_13c
            __builtin_memset(&var_13c, 0, 0x20)
            var_13c = 0x1a
            sub_4c4590(&lpszFile)
            void* ecx_3 = data_27e7fcc
            
            if (ecx_3 != 0)
                if (var_13c - 0xc u<= 0xb)
                    switch (var_13c + &jump_table_51a598[3])
                        case &lookup_table_51a5b0
                            *(data_27e7fdc + 0x10) = 2
                        case &lookup_table_51a5b0[1]
                            *(data_27e7fdc + 0x10) = 3
                        case &lookup_table_51a5b0[5]
                            *(data_27e7fdc + 0x10) = 4
                        case &lookup_table_51a5b0[7], &lookup_table_51a5b0[9]
                            *(data_27e7fdc + 0x10) = 6
                        case &lookup_table_51a5b0[0xb]
                            *(data_27e7fdc + 0x10) = 7
                
                int32_t var_138
                
                if (*(ecx_3 + 0x42) == 0 || var_13c != 1
                        || (var_138 != 0x74 && var_138 != 0x79 && var_138 != 0x7a))
                    sub_4d7830()
                else
                    sub_4d7330(&var_13c)
            
            result = 0xffffffff
            int32_t var_8_2 = 0xffffffff
            char* var_124
            
            if (var_124 != 0 && *var_124 != 0)
                if (*(var_124 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(var_124 - 0xc)
                *(var_124 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    void* edx_2 = data_26a44e4
                    int32_t ebx_2 = *(var_124 - 4) + 0x10
                    
                    if (edx_2 == 0)
                        sub_4f4250()
                        edx_2 = data_26a44e4
                    
                    int32_t eax_10 = 0
                    int32_t* edi_3
                    
                    while (true)
                        if (ebx_2 s<= 1 << (eax_10.b + 4))
                            edi_3 = edx_2 + eax_10 * 0x14
                            break
                        
                        eax_10 += 1
                        
                        if (eax_10 s>= 7)
                            edi_3 = edx_2 + 0x8c
                            break
                    
                    result = sub_4f4430(&var_124[0xfffffff0], edi_3, ebx_2)
            
            iFile = iFile_1 + 1
            iFile_1 = iFile
            
            if (iFile s>= result_1)
                break
            
            hDrop = hDrop_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
