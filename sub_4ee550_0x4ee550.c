// 函数名称: sub_4ee550
// 虚拟地址: 0x4ee550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ee550(void* arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: if (arg2 s< 0 || arg2 s>= *(sub_466320(**(arg1 + 0x2e4)) + 4))
    if (arg2 s< 0 || arg2 s>= *(sub_466320(**(arg1 + 0x2e4)) + 4))
        sub_4c5870("emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount", &data_83f3d3, 
            "Particle.cpp", 0x52d, "ParticleEmitOneByIndex")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(*(arg1 + 0x2e4) + 0x14) s> 0xbb8)
        return sub_4c5680("Too many particles. Probably too recursive.")
    
    int32_t* eax_3 = sub_4f3210()
    eax_3[0xb7] = arg2
    eax_3[0xb9] = *(arg1 + 0x2e4)
    eax_3[0xb8] = arg1
    int32_t result = sub_4ee330(eax_3)
    *(arg1 + 0x2cc) += 1
    return result
}
