// 函数名称: sub_53cb30
// 虚拟地址: 0x53cb30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_53cb30()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT eax_2 = sub_536e40()
    int32_t* eax_3 = sub_536db0()
    
    if (eax_3 == 0)
        sub_4c5870("pEmitter", &data_83f3d3, "Windows\EditorWindow.cpp", 0xa8f, "EditorSetString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint8_t string[0x54]
    GetDlgItemTextA(data_3078830, 0x93, &string, 0x50)
    char* eax_5
    void* edx
    eax_5, edx = sub_531070(eax_3, eax_2)
    uint8_t (* ecx_1)[0x54] = &string
    int32_t result
    
    while (true)
        edx.b = *eax_5
        uint8_t temp0_1 = *ecx_1
        bool c_1 = edx.b u< temp0_1
        
        if (edx.b == temp0_1)
            if (edx.b == 0)
                result = 0
                break
            
            edx.b = eax_5[1]
            uint8_t temp3_1 = (*ecx_1)[1]
            c_1 = edx.b u< temp3_1
            
            if (edx.b == temp3_1)
                eax_5 = &eax_5[2]
                ecx_1 = &(*ecx_1)[2]
                
                if (edx.b != 0)
                    continue
                
                result = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        result = sbb.d(sbb.d(eax_5, eax_5, c_1), 0xffffffff, c_2)
        break
    
    if (result != 0)
        uint8_t (* var_70_1)[0x54] = &string
        LRESULT var_74_1 = eax_2
        result = sub_536c00(sub_530b60(eax_3, edx, ecx_1, &data_8c35ec))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
