// 函数名称: sub_5193d0
// 虚拟地址: 0x5193d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5193d0(void* arg1 @ esi, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *arg2 = 0
    HANDLE hProcess = GetCurrentProcess()
    HANDLE hThread = GetCurrentThread()
    int32_t StackFrame
    sub_5abfc0(&StackFrame, 0, 0xa4)
    int32_t edx = *(arg1 + 0xb4)
    StackFrame = *(arg1 + 0xb8)
    int32_t var_a4 = 3
    int32_t var_94 = edx
    int32_t var_8c = 3
    int32_t var_88 = *(arg1 + 0xc4)
    int32_t var_80 = 3
    BOOL i_1 = 0
    BOOL i
    
    do
        i = StackWalk(0x14c, hProcess, hThread, &StackFrame, arg1, nullptr, SymFunctionTableAccess, 
            SymGetModuleBase, nullptr)
        
        if (i == 0)
            break
        
        if (i_1 s>= 0)
            arg2[*arg2 + 1] = StackFrame
            *arg2 += 1
        
        i = i_1 + 1
        i_1 = i
    while (i s< 8)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
