// 函数名称: sub_534bc0
// 虚拟地址: 0x534bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_534bc0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* eax = arg1[1]
    
    if (eax != 0)
        sub_500770(eax)
    
    int32_t* edi = *arg1
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_4fecf0(edi, arg1[3], nullptr)
    
    if (edi != 0)
        eax_2, edx = _aligned_free_base(edi)
    
    int32_t* eax_3 = sub_504a80(eax_2, edx, arg1[3], 
        "<Material>\t<pPassArray>\t\t<Name>sprite-pass</Name>\t\t<pVariationArray>\t\t\t"
    "<variationType>Base</variationType>\t\t\t<RenderLayer>Sprite</RenderLayer>\t\t\t<VertexShader>sys\S"
    "prite.shader</VertexShader>\t\t\t<PixelShader>sys\Sprite.shader</PixelShader>\t\t\t"
    "<AlphaBlendEnable>1</AlphaBlendEnable>\t\t\t<SrcBlend>SrcAlpha</SrcBlend>\t\t\t"
    "<DestBlend>InvSrcAlpha</DestBlend>\t\t\t<CullMode>None</CullMode>\t\t\t<ZEna")
    
    if (eax_3 != 0)
        int32_t* edi_1 = arg1[3]
        arg1[1] = eax_3
        int32_t* result = sub_501ff0(edi_1, eax_3)
        *arg1 = result
        return result
    
    sub_4c5870("pParseTree", &data_83f3d3, "Material.cpp", 0x383, "MaterialMakeDatalessFailureAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
