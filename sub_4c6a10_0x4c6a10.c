// 函数名称: sub_4c6a10
// 虚拟地址: 0x4c6a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c6a10(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eedb
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t edi
    int32_t var_24 = edi
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx = arg1[4]
    
    if (edx != 0xffffffff)
        int32_t eax_3 = arg1[5]
        
        if (eax_3 == 3)
            sub_4c68d0(arg1, 0xfa2)
            
            if (arg1[9] != 4)
                sub_4c5870("loc.connectStatus == NETWORK_CONNECT_OPEN", &data_83f3d3, "Network.cpp", 
                    0x173, "NetLocFree")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* ecx_1 = data_27e7bb4
            int32_t edx_1 = arg1[4]
            arg1[9] = 5
            (*(*ecx_1 + 0x34))(edx_1)
        else if (eax_3 == 1 || eax_3 == 2)
            (*(*data_27e7bb4 + 0x34))(edx)
            sub_4c6970(arg1)
        else if (eax_3 != 0)
            if (eax_3 != 4)
                sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x18c, "NetLocFree")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_4c6970(arg1)
        else
            (*(*data_27e7bb4 + 0xc))(edx)
    
    void* var_14
    
    while (arg1[0xe] != 0)
        void* eax_12 = sub_4db440(&arg1[0xc])
        void* edi_2 = data_27e7bb8
        var_14 = eax_12
        sub_518190(edi_2 + 0x44, &var_14)
    
    while (arg1[0x11] != 0)
        void* eax_14 = sub_4db440(&arg1[0xf])
        int32_t** edi_5 = data_27e7bb8 + 0x44
        var_14 = eax_14
        sub_518190(edi_5, &var_14)
    
    void* edi_6 = data_27e7bb8
    int32_t var_8_1 = 0
    sub_5041e0(&arg1[0xf])
    int32_t var_8_2 = 0xffffffff
    sub_5041e0(&arg1[0xc])
    int32_t result = *(edi_6 + 0xc)
    *(edi_6 + 0xc) = zx.d(arg1[0x12].w)
    arg1[0x12] = result
    *(edi_6 + 0x10) -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
