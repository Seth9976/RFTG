// 函数名称: sub_4f2990
// 虚拟地址: 0x4f2990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f2990(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    sub_500770(arg1[1])
    int32_t* edi = *arg1
    int32_t eax_1
    int32_t edx
    eax_1, edx = sub_4fecf0(edi, arg1[3], nullptr)
    
    if (edi != 0)
        eax_1, edx = _aligned_free_base(edi)
    
    int32_t* eax_2 = sub_504a80(eax_1, edx, arg1[3], 
        "<particle>\t<emitter>\t\t<Image>SYS/DUMMY_PARTICLE_IMAGE</Image>\t\t"
    "<param><type>SpawnMin</type><track><p>5 5 0</p></track></param>\t\t
            <param><type>SpinSpeed</type><track><p>1")
    
    if (eax_2 != 0)
        int32_t* edi_1 = arg1[3]
        arg1[1] = eax_2
        int32_t* result = sub_501ff0(edi_1, eax_2)
        *arg1 = result
        return result
    
    sub_4c5870("pParseTree", &data_83f3d3, "Particle.cpp", 0xaa6, "ParticleMakeDatalessFailureAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
