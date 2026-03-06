// 函数名称: sub_5367d0
// 虚拟地址: 0x5367d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5367d0(int32_t arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    int32_t edx = 0
    int32_t esi = 0
    int32_t eax = 0
    
    if (arg1 s>= 2)
        int32_t eax_2 = arg2 + 0xc
        int32_t i_1 = ((arg1 - 2) u>> 1) + 1
        int32_t ebx_1 = i_1 * 2
        int32_t i
        
        do
            edx += *(eax_2 - 8)
            esi += *eax_2
            eax_2 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
        ebx = 0
        eax = ebx_1
    
    if (eax s< arg1)
        ebx = *(arg2 + (eax << 3) + 4)
    
    int32_t ebx_3 = ebx + edx + esi
    
    if (ebx_3 s<= 0)
        sub_4c5870("totalWeight > 0", &data_83f3d3, "c:\ax2010\engine\MathFunctions.cpp", 0x21, 
            "XWeightedArrayPick")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t temp1 = modu.dp.d(0:(sub_4c95c0()), ebx_3)
    int32_t esi_1 = 0
    int32_t eax_5 = 0
    
    if (arg1 s> 0)
        int32_t ecx_4 = arg2 + 4
        
        do
            esi_1 += *ecx_4
            
            if (temp1 s< esi_1)
                return arg2 + (eax_5 << 3)
            
            eax_5 += 1
            ecx_4 += 8
        while (eax_5 s< arg1)
    
    sub_4c5870("Halt", &data_83f3d3, "c:\ax2010\engine\MathFunctions.cpp", 0x31, "XWeightedArrayPick")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
