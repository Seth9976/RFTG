// 函数名称: sub_4fff30
// 虚拟地址: 0x4fff30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4fff30(void* arg1, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 8)
    int32_t edx = *(arg1 + 8)
    int32_t ecx_1 = neg.d(edx)
    int32_t i = neg.d(sbb.d(ecx_1, ecx_1, edx != 0)) - 1
    
    while (i != 0xffffffff)
        int32_t eax_2 = i * 0xf
        i += 1
        int32_t* result = *(arg1 + 4) + (eax_2 << 2)
        
        if (i s>= edx)
            i = 0xffffffff
        
        if (*result == arg2)
            return result
    
    sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x469, "DefFindField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
