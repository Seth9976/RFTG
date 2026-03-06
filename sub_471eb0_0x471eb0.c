// 函数名称: sub_471eb0
// 虚拟地址: 0x471eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_471eb0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_27e7a40
    int32_t var_20 = *(*(eax_2 + 0x2c495c) * 0x1f8 + eax_2 + 0xcac)
    void* eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_463760(arg2)
    int32_t var_1c = *eax_4
    int32_t var_18 = arg1
    void* result = sub_4637c0(eax_4, edx_2, data_27e7a40 + 0x2c495c, 0)
    
    if (arg1 != *result)
        sub_4c5870("choice_pos_bytes == playerGamestate.logLengthBytesCurrent", &data_83f3d3, 
            "..\code\RFTGShared.cpp", 0x1309, "SendWaitInfo")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx_4 = *(data_27e7a40 + 0x28)
    data_27e7a7c = arg1
    data_27e7a80 = 2
    
    if (ecx_4 != 0)
        int32_t** edx_4 = data_27e7bb8
        result = zx.d(ecx_4.w)
        
        if (result u< edx_4[1])
            result = &(*edx_4)[result * 0x13]
            
            if (*(result + 0x48) == ecx_4)
                int32_t var_14
                int32_t* var_30_1 = &var_14
                void* var_34_1 = result + 0x3c
                int32_t var_10_1 = 0xc
                int32_t var_c_1 = 0xf425b
                var_14 = 0xfeedface
                void* ecx_5
                int32_t** edx_5
                ecx_5, edx_5 = sub_4c72b0(0xc, edx_4, ecx_4)
                int32_t* var_38_1 = &var_20
                void* var_3c_1 = result + 0x3c
                result = sub_4c72b0(0xc, edx_5, ecx_5)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
