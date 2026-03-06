// 函数名称: sub_5af622
// 虚拟地址: 0x5af622
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5af622(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_20c = edi
    uint32_t hFile = sub_5af5fc(arg1)
    uint32_t edi_1 = hFile
    uint32_t numberOfBytesWritten = edi_1
    
    if (edi_1 != 0)
        int32_t eax_2 = __set_error_mode(3)
        
        if (eax_2 != 1)
            hFile = __set_error_mode(3)
        
        if (eax_2 == 1 || (hFile == 0 && data_8b8310 == 1))
            hFile = GetStdHandle(STD_ERROR_HANDLE)
            
            if (hFile != 0 && hFile != 0xffffffff)
                char buffer[0x1f3]
                
                for (int32_t i = 0; i u< 0x1f4; i += 1)
                    buffer[i] = *(edi_1 + (i << 1))
                    
                    if (*(edi_1 + (i << 1)) == 0)
                        break
                
                char var_9_1 = 0
                hFile = WriteFile(hFile, &buffer, _strlen(&buffer), &numberOfBytesWritten, nullptr)
        else if (arg1 != 0xfc)
            int32_t eax_3 = sub_5b9170(0xbecad0, 0x314, u"Runtime Error!\n\nProgram: ")
            
            if (eax_3 != 0)
                int32_t var_220_3
                __builtin_memset(&var_220_3, 0, 0x14)
                sub_5ad34e()
                noreturn
            
            data_becd0a = eax_3.w
            uint32_t eax_4 = GetModuleFileNameW(nullptr, &data_becb02, 0x104)
            int32_t eax_5
            
            if (eax_4 == 0)
                eax_5 = sub_5b9170(&data_becb02, 0x2fb, u"<program name unknown>")
            
            if (eax_4 == 0 && eax_5 != 0)
            label_5af6e6:
                int32_t var_220_1
                __builtin_memset(&var_220_1, 0, 0x14)
                sub_5ad34e()
                noreturn
            
            int32_t eax_7 = _wcslen(&data_becb02) + 1
            int32_t eax_10
            
            if (eax_7 u> 0x3c)
                void* eax_9 = (_wcslen(&data_becb02) << 1) + &data_beca8c
                eax_10 = sub_5b90a3(eax_9, 0x2fb - ((eax_9 - &data_becb02) s>> 1), 0x6b1a3c, 3)
            
            if (eax_7 u> 0x3c && eax_10 != 0)
                goto label_5af6e6
            
            if (sub_5b902e(0xbecad0, 0x314, 0x6b1a34) != 0)
                goto label_5af6e6
            
            if (sub_5b902e(0xbecad0, 0x314, numberOfBytesWritten) != 0)
                goto label_5af6e6
            
            hFile = sub_5b8ec2(0xbecad0, u"Microsoft Visual C++ Runtime Library", 0x12010)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return hFile
}
