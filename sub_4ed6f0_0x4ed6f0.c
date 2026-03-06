// 函数名称: sub_4ed6f0
// 虚拟地址: 0x4ed6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ed6f0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi = 0
    int32_t edx = 0
    int32_t esi = 0
    int32_t var_8_1 = 0
    int32_t entry_ebx
    
    if (entry_ebx s>= 2)
        int32_t eax_2 = arg1 + 0x1c
        int32_t i_1 = ((entry_ebx - 2) u>> 1) + 1
        edi = i_1 * 2
        int32_t i
        
        do
            edx += *(eax_2 - 0x10)
            esi += *eax_2
            eax_2 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (edi s< entry_ebx)
        var_8_1 = *(arg1 + edi * 0x10 + 0xc)
    
    int32_t eax_5 = var_8_1 + edx + esi
    
    if (eax_5 s<= 0)
        sub_4c5870("totalWeight > 0", &data_83f3d3, "Particle.cpp", 0x45a, "ParticlePickColorFromArray")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t temp1 = modu.dp.d(0:(sub_4c95c0()), eax_5)
    int32_t esi_1 = 0
    int32_t result = 0
    
    if (entry_ebx s> 0)
        int32_t ecx_5 = arg1 + 0xc
        
        do
            esi_1 += *ecx_5
            
            if (temp1 s< esi_1)
                return result
            
            result += 1
            ecx_5 += 0x10
        while (result s< entry_ebx)
    
    sub_4c5870("Halt", &data_83f3d3, "Particle.cpp", 0x46a, "ParticlePickColorFromArray")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
