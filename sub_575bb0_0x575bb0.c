// 函数名称: sub_575bb0
// 虚拟地址: 0x575bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_575bb0(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t* eax = sub_4f4890(data_273ac20)
    int32_t* eax = sub_4f4890(data_273ac20)
    int32_t ecx = eax[1]
    int32_t result = 0
    
    if (ecx s> 0)
        int32_t* edx_1 = *eax
        
        do
            if (*edx_1 == arg1)
                return result
            
            result += 1
            edx_1 = &edx_1[0x46]
        while (result s< ecx)
    
    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x117, "FindElementIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
